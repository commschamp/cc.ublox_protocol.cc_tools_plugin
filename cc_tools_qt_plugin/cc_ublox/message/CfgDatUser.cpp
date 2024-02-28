// Generated by commsdsl2tools_qt v6.3.0

#include "CfgDatUser.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgDatD.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgDatFlat.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgDatMajA.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgDatRot.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgDatScale.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgDatUser.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_majA(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MajA;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatMajA(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flat(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flat;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatFlat(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_dX(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DX;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatD(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_dY(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DY;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatD(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_dZ(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DZ;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatD(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_rotX(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RotX;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatRot(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_rotY(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RotY;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatRot(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_rotZ(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RotZ;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatRot(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_scale(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDatUserFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Scale;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgDatScale(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_majA(false));
    props.append(createProps_flat(false));
    props.append(createProps_dX(false));
    props.append(createProps_dY(false));
    props.append(createProps_dZ(false));
    props.append(createProps_rotX(false));
    props.append(createProps_rotY(false));
    props.append(createProps_rotZ(false));
    props.append(createProps_scale(false));
    return props;
}

} // namespace

class CfgDatUserImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgDatUser<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgDatUserImpl
    >
{
public:
    CfgDatUserImpl() = default;
    CfgDatUserImpl(const CfgDatUserImpl&) = delete;
    CfgDatUserImpl(CfgDatUserImpl&&) = delete;
    virtual ~CfgDatUserImpl() = default;
    CfgDatUserImpl& operator=(const CfgDatUserImpl&) = default;
    CfgDatUserImpl& operator=(CfgDatUserImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDatUser::CfgDatUser() : m_pImpl(new CfgDatUserImpl) {}
CfgDatUser::~CfgDatUser() = default;

CfgDatUser& CfgDatUser::operator=(const CfgDatUser& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDatUser& CfgDatUser::operator=(CfgDatUser&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgDatUser::MsgIdParamType CfgDatUser::doGetId()
{
    return ::cc_ublox::message::CfgDatUser<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgDatUser::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDatUser::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDatUser::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDatUser::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDatUser::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDatUser*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDatUser::MsgIdParamType CfgDatUser::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDatUser::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDatUser::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDatUser::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDatUser::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDatUser::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

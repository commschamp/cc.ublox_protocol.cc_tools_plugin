// Generated by commsdsl2tools_qt v6.3.4

#include "CfgDosc.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgDosc.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numOsc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumOsc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_oscId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::OscId;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add("Internal", 0)
                    .add("External", 1)
                    .asMap();
        }

        static QVariantMap createProps_reserved2(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved2;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
            return props;
        }

        struct FlagsMembers
        {
            static QVariantMap createProps_bits(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::Bits;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add(0U, "isCalibrated")
                        .asMap();
            }

            static QVariantMap createProps_controlIf(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::ControlIf;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add("Custom", 0)
                        .add("Microchip", 1)
                        .add("TI", 2)
                        .add("DAC_12bit", 13)
                        .add("DAC_14bit", 14)
                        .add("DAC_16bit", 15)
                        .asMap();
            }

            static QVariantMap createProps_reserved(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::Reserved;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }
        }; // struct FlagsMembers

        static QVariantMap createProps_flags(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Flags;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(FlagsMembers::createProps_bits(true))
                    .add(FlagsMembers::createProps_controlIf(true))
                    .add(FlagsMembers::createProps_reserved(true))
                    .asMap();
        }

        static QVariantMap createProps_freq(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Freq;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(2U)
                    .asMap();
        }

        static QVariantMap createProps_phaseOffset(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PhaseOffset;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_withTemp(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::WithTemp;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }

        static QVariantMap createProps_withAge(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::WithAge;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }

        static QVariantMap createProps_timeToTemp(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::TimeToTemp;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved3(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved3;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_gainVco(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::GainVco;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(9U)
                    .asMap();
        }

        static QVariantMap createProps_gainUncertainty(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::GainUncertainty;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(8U)
                    .asMap();
        }

        static QVariantMap createProps_reserved4(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved4;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
            return props;
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_oscId(serHidden))
                .add(ElementMembers::createProps_reserved2(serHidden))
                .add(ElementMembers::createProps_flags(serHidden))
                .add(ElementMembers::createProps_freq(serHidden))
                .add(ElementMembers::createProps_phaseOffset(serHidden))
                .add(ElementMembers::createProps_withTemp(serHidden))
                .add(ElementMembers::createProps_withAge(serHidden))
                .add(ElementMembers::createProps_timeToTemp(serHidden))
                .add(ElementMembers::createProps_reserved3(serHidden))
                .add(ElementMembers::createProps_gainVco(serHidden))
                .add(ElementMembers::createProps_gainUncertainty(serHidden))
                .add(ElementMembers::createProps_reserved4(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDoscFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_numOsc(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class CfgDoscImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgDosc<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgDoscImpl
    >
{
public:
    CfgDoscImpl() = default;
    CfgDoscImpl(const CfgDoscImpl&) = delete;
    CfgDoscImpl(CfgDoscImpl&&) = delete;
    virtual ~CfgDoscImpl() = default;
    CfgDoscImpl& operator=(const CfgDoscImpl&) = default;
    CfgDoscImpl& operator=(CfgDoscImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDosc::CfgDosc() : m_pImpl(new CfgDoscImpl) {}
CfgDosc::~CfgDosc() = default;

CfgDosc& CfgDosc::operator=(const CfgDosc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDosc& CfgDosc::operator=(CfgDosc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgDosc::MsgIdParamType CfgDosc::doGetId()
{
    return ::cc_ublox::message::CfgDosc<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgDosc::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDosc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDosc::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDosc::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDosc::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDosc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDosc::MsgIdParamType CfgDosc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDosc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDosc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDosc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDosc::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDosc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
